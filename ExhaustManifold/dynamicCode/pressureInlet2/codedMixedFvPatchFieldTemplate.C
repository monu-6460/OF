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
    // SHA1 = 31ab1a66163012e68b3eb982a257e8d031810323
    //
    // unique function name that can be checked if the correct library version
    // has been loaded
    void pressureInlet2_31ab1a66163012e68b3eb982a257e8d031810323(bool load)
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
    pressureInlet2MixedValueFvPatchScalarField
);


const char* const pressureInlet2MixedValueFvPatchScalarField::SHA1sum =
    "31ab1a66163012e68b3eb982a257e8d031810323";


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

pressureInlet2MixedValueFvPatchScalarField::
pressureInlet2MixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF
)
:
    mixedFvPatchField<scalar>(p, iF)
{
    if (false)
    {
        Info<<"construct pressureInlet2 sha1: 31ab1a66163012e68b3eb982a257e8d031810323"
            " from patch/DimensionedField\n";
    }
}


pressureInlet2MixedValueFvPatchScalarField::
pressureInlet2MixedValueFvPatchScalarField
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
        Info<<"construct pressureInlet2 sha1: 31ab1a66163012e68b3eb982a257e8d031810323"
            " from patch/dictionary\n";
    }
}


pressureInlet2MixedValueFvPatchScalarField::
pressureInlet2MixedValueFvPatchScalarField
(
    const pressureInlet2MixedValueFvPatchScalarField& ptf,
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const fvPatchFieldMapper& mapper
)
:
    mixedFvPatchField<scalar>(ptf, p, iF, mapper)
{
    if (false)
    {
        Info<<"construct pressureInlet2 sha1: 31ab1a66163012e68b3eb982a257e8d031810323"
            " from patch/DimensionedField/mapper\n";
    }
}


pressureInlet2MixedValueFvPatchScalarField::
pressureInlet2MixedValueFvPatchScalarField
(
    const pressureInlet2MixedValueFvPatchScalarField& ptf,
    const DimensionedField<scalar, volMesh>& iF
)
:
    mixedFvPatchField<scalar>(ptf, iF)
{
    if (false)
    {
        Info<<"construct pressureInlet2 sha1: 31ab1a66163012e68b3eb982a257e8d031810323 "
            "as copy/DimensionedField\n";
    }
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

pressureInlet2MixedValueFvPatchScalarField::
~pressureInlet2MixedValueFvPatchScalarField()
{
    if (false)
    {
        Info<<"destroy pressureInlet2 sha1: 31ab1a66163012e68b3eb982a257e8d031810323\n";
    }
}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void pressureInlet2MixedValueFvPatchScalarField::updateCoeffs()
{
    if (this->updated())
    {
        return;
    }

    if (false)
    {
        Info<<"updateCoeffs pressureInlet2 sha1: 31ab1a66163012e68b3eb982a257e8d031810323\n";
    }

//{{{ begin code
    #line 65 "/home/monu/openFoamFiles/ExhaustManifold/0/p/boundaryField/inlet2"
const scalar t = this->db().time().value();

            scalar pf = 27;
            scalar PI = Foam::constant::mathematical::pi;
            
            scalar w = 0;

            if (sin((t-0.05)*2*10*PI) > 0 && sin((t-0.05)*2*10*PI) < 0.2)
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

