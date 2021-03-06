//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLThumbnailUtilities : NSObject
{
}

+ (_Bool)performSWCascadingDownscaleTo5551OnImage:(struct CGImage *)arg1 withSpecifications:(id)arg2 destinationData:(id *)arg3;	// IMP=0x00000000002a0781
+ (_Bool)performSWDownscaleTo5551OnImage:(struct CGImage *)arg1 withSpecification:(id)arg2 destinationData:(id *)arg3 imageRect:(struct CGRect *)arg4 bytesPerRow:(int *)arg5;	// IMP=0x00000000002a06c6
+ (_Bool)_performSWDownscaleTo5551OnSourceImage:(struct CGImage *)arg1 withSourceDimensions:(CDStruct_1ef3fb1f)arg2 withSpecification:(id)arg3 destinationData:(id)arg4 imageRect:(struct CGRect *)arg5 bytesPerRow:(int *)arg6;	// IMP=0x00000000002a050a
+ (_Bool)_validateSpecifications:(id)arg1 destinationData:(id *)arg2;	// IMP=0x00000000002a00b7
+ (_Bool)_validateSpecification:(id)arg1 destinationData:(id *)arg2;	// IMP=0x000000000029ff2f
+ (id)_destinationDataArrayFromSpecifications:(id)arg1;	// IMP=0x000000000029fd70
+ (id)_destinationDataFromSpecification:(id)arg1;	// IMP=0x000000000029fd01
+ (int)_requiredDataLengthForSpecification:(id)arg1;	// IMP=0x000000000029fc69
+ (int)_bytesPerRowForSpecification:(id)arg1;	// IMP=0x000000000029fb7b

@end

