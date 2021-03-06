//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNEspressoHelpers : NSObject
{
}

+ (_Bool)feedForwardEspressoBufferForNetwork:(CDStruct_2bc666a5 *)arg1 fromBufferWithName:(id)arg2 toBufferWithName:(id)arg3 firstFrame:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000017393e
+ (unsigned long long)pixelValueSizeInBytesForBuffer:(const CDStruct_0a65202a *)arg1 error:(id *)arg2;	// IMP=0x00000000001738ba
+ (_Bool)renderEspressoBufferImage:(const CDStruct_0a65202a *)arg1 intoCVPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3;	// IMP=0x0000000000173634
+ (struct __CVBuffer *)createCVPixelBufferWithPixelFormat:(unsigned int)arg1 fromImageInEspressoBuffer:(const CDStruct_0a65202a *)arg2 error:(id *)arg3;	// IMP=0x0000000000173487
+ (_Bool)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 lowPriorityMode:(_Bool)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 networkConfiguration:(id)arg6 explicitNetworkLayersStorageType:(int)arg7 espressoResources:(id *)arg8 error:(id *)arg9;	// IMP=0x0000000000172b65
+ (_Bool)createSingleNetworkPlanFromResourceName:(id)arg1 usingProcessingDevice:(id)arg2 lowPriorityMode:(_Bool)arg3 inputBlobNames:(id)arg4 outputBlobNames:(id)arg5 networkConfiguration:(id)arg6 espressoResources:(id *)arg7 error:(id *)arg8;	// IMP=0x0000000000172a53
+ (_Bool)getWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 ofBlobNamed:(id)arg3 forNetworkModelFileWithName:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000172441
+ (id)pathForEspressoNetworkModelFileWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000172415
+ (id)pathForEspressoResourceWithFilename:(id)arg1 error:(id *)arg2;	// IMP=0x000000000017233c
+ (id)pathForEspressoResource:(id)arg1 ofType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000172152
+ (id)_locateFrameworkBundleForResourceWithName:(id)arg1 resourceDirectory:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000171ecc

@end

