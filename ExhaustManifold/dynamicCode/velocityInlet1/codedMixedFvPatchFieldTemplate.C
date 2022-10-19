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
    // SHA1 = 61e01256aa7d1f9f0af5316f62925a829de29b8e
    //
    // unique function name that can be checked if the correct library version
    // has been loaded
    void velocityInlet1_61e01256aa7d1f9f0af5316f62925a829de29b8e(bool load)
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
    fvPatchVectorField,
    velocityInlet1MixedValueFvPatchVectorField
);


const char* const velocityInlet1MixedValueFvPatchVectorField::SHA1sum =
    "61e01256aa7d1f9f0af5316f62925a829de29b8e";


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

velocityInlet1MixedValueFvPatchVectorField::
velocityInlet1MixedValueFvPatchVectorField
(
    const fvPatch& p,
    const DimensionedField<vector, volMesh>& iF
)
:
    mixedFvPatchField<vector>(p, iF)
{
    if (false)
    {
        Info<<"construct velocityInlet1 sha1: 61e01256aa7d1f9f0af5316f62925a829de29b8e"
            " from patch/DimensionedField\n";
    }
}


velocityInlet1MixedValueFvPatchVectorField::
velocityInlet1MixedValueFvPatchVectorField
(
    const fvPatch& p,
    const DimensionedField<vector, volMesh>& iF,
    const dictionary& dict
)
:
    mixedFvPatchField<vector>(p, iF, dict)
{
    if (false)
    {
        Info<<"construct velocityInlet1 sha1: 61e01256aa7d1f9f0af5316f62925a829de29b8e"
            " from patch/dictionary\n";
    }
}


velocityInlet1MixedValueFvPatchVectorField::
velocityInlet1MixedValueFvPatchVectorField
(
    const velocityInlet1MixedValueFvPatchVectorField& ptf,
    const fvPatch& p,
    const DimensionedField<vector, volMesh>& iF,
    const fvPatchFieldMapper& mapper
)
:
    mixedFvPatchField<vector>(ptf, p, iF, mapper)
{
    if (false)
    {
        Info<<"construct velocityInlet1 sha1: 61e01256aa7d1f9f0af5316f62925a829de29b8e"
            " from patch/DimensionedField/mapper\n";
    }
}


velocityInlet1MixedValueFvPatchVectorField::
velocityInlet1MixedValueFvPatchVectorField
(
    const velocityInlet1MixedValueFvPatchVectorField& ptf,
    const DimensionedField<vector, volMesh>& iF
)
:
    mixedFvPatchField<vector>(ptf, iF)
{
    if (false)
    {
        Info<<"construct velocityInlet1 sha1: 61e01256aa7d1f9f0af5316f62925a829de29b8e "
            "as copy/DimensionedField\n";
    }
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

velocityInlet1MixedValueFvPatchVectorField::
~velocityInlet1MixedValueFvPatchVectorField()
{
    if (false)
    {
        Info<<"destroy velocityInlet1 sha1: 61e01256aa7d1f9f0af5316f62925a829de29b8e\n";
    }
}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void velocityInlet1MixedValueFvPatchVectorField::updateCoeffs()
{
    if (this->updated())
    {
        return;
    }

    if (false)
    {
        Info<<"updateCoeffs velocityInlet1 sha1: 61e01256aa7d1f9f0af5316f62925a829de29b8e\n";
    }

//{{{ begin code
    #line 35 "/home/monu/openFoamFiles/ExhaustManifold/0/U/boundaryField/inlet1"
const scalar t = this->db().time().value();

            vector Uf = vector(0,0,0);
            scalar PI = Foam::constant::mathematical::pi;
            
            scalar w = 1;

            if (sin(t*2*10*PI) > 0 && sin(t*2*10*PI) < 0.2)
            {
                w = 0;
            }

            this->refValue() = Uf;
            this->refGrad() = vector(0,0,0);
            this->valueFraction() = w;
//}}} end code

    this->mixedFvPatchField<vector>::updateCoeffs();
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

