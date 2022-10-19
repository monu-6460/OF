/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     | Website:  https://openfoam.org
    \\  /    A nd           | Copyright (C) YEAR OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "codedMixedFvPatchFieldTemplate.H"
#include "addToRunTimeSelectionTable.H"
#include "fvPatchFieldMapper.H"
#include "volFields.H"
#include "surfaceFields.H"
#include "unitConversion.H"
//{{{ begin codeInclude

//}}} end codeInclude


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode


// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

extern "C"
{
    // dynamicCode:
    // SHA1 = 6183ca22eb3c6267783302399c8cb3e50e942cd1
    //
    // unique function name that can be checked if the correct library version
    // has been loaded
    void pressureInlet3_6183ca22eb3c6267783302399c8cb3e50e942cd1(bool load)
    {
        if (load)
        {
            // code that can be explicitly executed after loading
        }
        else
        {
            // code that can be explicitly executed before unloading
        }
    }
}

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

makeRemovablePatchTypeField
(
    fvPatchScalarField,
    pressureInlet3MixedValueFvPatchScalarField
);


const char* const pressureInlet3MixedValueFvPatchScalarField::SHA1sum =
    "6183ca22eb3c6267783302399c8cb3e50e942cd1";


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

pressureInlet3MixedValueFvPatchScalarField::
pressureInlet3MixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF
)
:
    mixedFvPatchField<scalar>(p, iF)
{
    if (false)
    {
        Info<<"construct pressureInlet3 sha1: 6183ca22eb3c6267783302399c8cb3e50e942cd1"
            " from patch/DimensionedField\n";
    }
}


pressureInlet3MixedValueFvPatchScalarField::
pressureInlet3MixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const dictionary& dict
)
:
    mixedFvPatchField<scalar>(p, iF, dict)
{
    if (false)
    {
        Info<<"construct pressureInlet3 sha1: 6183ca22eb3c6267783302399c8cb3e50e942cd1"
            " from patch/dictionary\n";
    }
}


pressureInlet3MixedValueFvPatchScalarField::
pressureInlet3MixedValueFvPatchScalarField
(
    const pressureInlet3MixedValueFvPatchScalarField& ptf,
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const fvPatchFieldMapper& mapper
)
:
    mixedFvPatchField<scalar>(ptf, p, iF, mapper)
{
    if (false)
    {
        Info<<"construct pressureInlet3 sha1: 6183ca22eb3c6267783302399c8cb3e50e942cd1"
            " from patch/DimensionedField/mapper\n";
    }
}


pressureInlet3MixedValueFvPatchScalarField::
pressureInlet3MixedValueFvPatchScalarField
(
    const pressureInlet3MixedValueFvPatchScalarField& ptf,
    const DimensionedField<scalar, volMesh>& iF
)
:
    mixedFvPatchField<scalar>(ptf, iF)
{
    if (false)
    {
        Info<<"construct pressureInlet3 sha1: 6183ca22eb3c6267783302399c8cb3e50e942cd1 "
            "as copy/DimensionedField\n";
    }
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

pressureInlet3MixedValueFvPatchScalarField::
~pressureInlet3MixedValueFvPatchScalarField()
{
    if (false)
    {
        Info<<"destroy pressureInlet3 sha1: 6183ca22eb3c6267783302399c8cb3e50e942cd1\n";
    }
}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void pressureInlet3MixedValueFvPatchScalarField::updateCoeffs()
{
    if (this->updated())
    {
        return;
    }

    if (false)
    {
        Info<<"updateCoeffs pressureInlet3 sha1: 6183ca22eb3c6267783302399c8cb3e50e942cd1\n";
    }

//{{{ begin code
    #line 94 "/home/monu/openFoamFiles/ExhaustManifold/0/p/boundaryField/inlet3"
const scalar t = this->db().time().value();

            scalar pf = 35;
            scalar PI = Foam::constant::mathematical::pi;
            
            scalar w = 0;

            if (sin((t-0.025)*2*10*PI) > 0 && sin((t-0.025)*2*10*PI) < 0.2)
            {
                w = 1;
            }

            this->refValue() = pf;
            this->refGrad() = 0;
            this->valueFraction() = w;
//}}} end code

    this->mixedFvPatchField<scalar>::updateCoeffs();
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

