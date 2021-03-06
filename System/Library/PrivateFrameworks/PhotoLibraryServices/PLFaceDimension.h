//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PFPhotosFaceRepresentation-Protocol.h>

@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation>
{
    long long _sourceWidth;	// 8 = 0x8
    long long _sourceHeight;	// 16 = 0x10
    double _centerX;	// 24 = 0x18
    double _centerY;	// 32 = 0x20
    double _size;	// 40 = 0x28
}

- (double)photosFaceRepresentationQuality;	// IMP=0x0000000000561aeb
- (double)photosFaceRepresentationRoll;	// IMP=0x0000000000561ae2
- (id)photosFaceRepresentationLocalIdentifier;	// IMP=0x0000000000561ada
- (long long)photosFaceRepresentationClusterSequenceNumber;	// IMP=0x0000000000561ad2
- (long long)photosFaceRepresentationQualityMeasure;	// IMP=0x0000000000561aca
- (_Bool)photosFaceRepresentationIsRightEyeClosed;	// IMP=0x0000000000561ac2
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;	// IMP=0x0000000000561aba
- (_Bool)photosFaceRepresentationHasSmile;	// IMP=0x0000000000561ab2
- (double)photosFaceRepresentationBlurScore;	// IMP=0x0000000000561aa9
- (double)photosFaceRepresentationSize;	// IMP=0x0000000000561a9e
- (double)photosFaceRepresentationCenterY;	// IMP=0x0000000000561a93
- (double)photosFaceRepresentationCenterX;	// IMP=0x0000000000561a88
- (long long)photosFaceRepresentationSourceHeight;	// IMP=0x0000000000561a7e
- (long long)photosFaceRepresentationSourceWidth;	// IMP=0x0000000000561a74
- (id)description;	// IMP=0x00000000005619e8
- (id)initWithSourceWidth:(long long)arg1 sourceHeight:(long long)arg2 centerX:(double)arg3 centerY:(double)arg4 size:(double)arg5;	// IMP=0x0000000000561973

@end

