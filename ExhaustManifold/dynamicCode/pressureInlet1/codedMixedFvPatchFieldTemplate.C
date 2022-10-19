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
    // SHA1 = 489aa26c74e62737ea2565d2bd48e1ab94ac2f86
    //
    // unique function name that can be checked if the correct library version
    // has been loaded
    void pressureInlet1_489aa26c74e62737ea2565d2bd48e1ab94ac2f86(bool load)
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
    pressureInlet1MixedValueFvPatchScalarField
);


const char* const pressureInlet1MixedValueFvPatchScalarField::SHA1sum =
    "489aa26c74e62737ea2565d2bd48e1ab94ac2f86";


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

pressureInlet1MixedValueFvPatchScalarField::
pressureInlet1MixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF
)
:
    mixedFvPatchField<scalar>(p, iF)
{
    if (false)
    {
        Info<<"construct pressureInlet1 sha1: 489aa26c74e62737ea2565d2bd48e1ab94ac2f86"
            " from patch/DimensionedField\n";
    }
}


pressureInlet1MixedValueFvPatchScalarField::
pressureInlet1MixedValueFvPatchScalarField
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
        Info<<"construct pressureInlet1 sha1: 489aa26c74e62737ea2565d2bd48e1ab94ac2f86"
            " from patch/dictionary\n";
    }
}


pressureInlet1MixedValueFvPatchScalarField::
pressureInlet1MixedValueFvPatchScalarField
(
    const pressureInlet1MixedValueFvPatchScalarField& ptf,
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const fvPatchFieldMapper& mapper
)
:
    mixedFvPatchField<scalar>(ptf, p, iF, mapper)
{
    if (false)
    {
        Info<<"construct pressureInlet1 sha1: 489aa26c74e62737ea2565d2bd48e1ab94ac2f86"
            " from patch/DimensionedField/mapper\n";
    }
}


pressureInlet1MixedValueFvPatchScalarField::
pressureInlet1MixedValueFvPatchScalarField
(
    const pressureInlet1MixedValueFvPatchScalarField& ptf,
    const DimensionedField<scalar, volMesh>& iF
)
:
    mixedFvPatchField<scalar>(ptf, iF)
{
    if (false)
    {
        Info<<"construct pressureInlet1 sha1: 489aa26c74e62737ea2565d2bd48e1ab94ac2f86 "
            "as copy/DimensionedField\n";
    }
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

pressureInlet1MixedValueFvPatchScalarField::
~pressureInlet1MixedValueFvPatchScalarField()
{
    if (false)
    {
        Info<<"destroy pressureInlet1 sha1: 489aa26c74e62737ea2565d2bd48e1ab94ac2f86\n";
    }
}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void pressureInlet1MixedValueFvPatchScalarField::updateCoeffs()
{
    if (this->updated())
    {
        return;
    }

    if (false)
    {
        Info<<"updateCoeffs pressureInlet1 sha1: 489aa26c74e62737ea2565d2bd48e1ab94ac2f86\n";
    }

//{{{ begin code
    #line 35 "/home/monu/openFoamFiles/ExhaustManifold/0/p/boundaryField/inlet1"
const scalar t = this->db().time().value();

            scalar pf = 30;
            scalar PI = Foam::constant::mathematical::pi;
            
            scalar w = 0;

            if (sin(t*2*10*PI) > 0 && sin(t*2*10*PI) < 0.2)
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

