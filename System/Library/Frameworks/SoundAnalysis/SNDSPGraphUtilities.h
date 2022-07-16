//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNDSPGraphUtilities : NSObject
{
}

+ (_Bool)stopInjectingBoxesInGraph:(id)arg1;	// IMP=0x000000000005ce0f
+ (_Bool)startInjectingBoxes:(id)arg1 inGraph:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005c961
+ (_Bool)stopRecordingBoxesInGraph:(id)arg1;	// IMP=0x000000000005c769
+ (_Bool)startRecordingWithBoxRecordingInfos:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005c242
+ (_Bool)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005bc39
+ (_Bool)startRecordingFirstBoxInGraph:(id)arg1 toDirectory:(id)arg2 withFileName:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005b9d8

@end
