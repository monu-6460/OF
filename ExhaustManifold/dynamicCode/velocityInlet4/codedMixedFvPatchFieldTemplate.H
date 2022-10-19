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

Description
    Template for use with dynamic code generation of a
    mixed fvPatchField.

    - without state

SourceFiles
    mixedFvPatchFieldTemplate.C

\*---------------------------------------------------------------------------*/

#ifndef codedMixedFvPatchFieldTemplate_H
#define codedMixedFvPatchFieldTemplate_H

#include "mixedFvPatchFields.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

/*---------------------------------------------------------------------------*\
                     A templated MixedValueFvPatchField
\*---------------------------------------------------------------------------*/

class velocityInlet4MixedValueFvPatchVectorField
:
    public mixedFvPatchField<vector>
{
public:

    //- Information about the SHA1 of the code itself
    static const char* const SHA1sum;

    //- Runtime type information
    TypeName("velocityInlet4");


    // Constructors

        //- Construct from patch and internal field
        velocityInlet4MixedValueFvPatchVectorField
        (
            const fvPatch&,
            const DimensionedField<vector, volMesh>&
        );

        //- Construct from patch, internal field and dictionary
        velocityInlet4MixedValueFvPatchVectorField
        (
            const fvPatch&,
            const DimensionedField<vector, volMesh>&,
            const dictionary&
        );

        //- Construct by mapping a copy onto a new patch
        velocityInlet4MixedValueFvPatchVectorField
        (
            const velocityInlet4MixedValueFvPatchVectorField&,
            const fvPatch&,
            const DimensionedField<vector, volMesh>&,
            const fvPatchFieldMapper&
        );

        //- Disallow copy without setting internal field reference
        velocityInlet4MixedValueFvPatchVectorField
        (
            const velocityInlet4MixedValueFvPatchVectorField&
        ) = delete;

        //- Copy constructor setting internal field reference
        velocityInlet4MixedValueFvPatchVectorField
        (
            const velocityInlet4MixedValueFvPatchVectorField&,
            const DimensionedField<vector, volMesh>&
        );

        //- Construct and return a clone setting internal field reference
        virtual tmp<fvPatchVectorField > clone
        (
            const DimensionedField<vector, volMesh>& iF
        ) const
        {
            return tmp<fvPatchVectorField >
            (
                new velocityInlet4MixedValueFvPatchVectorField(*this, iF)
            );
        }


    //- Destructor
    virtual ~velocityInlet4MixedValueFvPatchVectorField();


    // Member Functions

        //- Update the coefficients associated with the patch field
        virtual void updateCoeffs();
};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //

