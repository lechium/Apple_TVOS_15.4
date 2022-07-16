//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface OSALegacyXform : NSObject
{
    NSMutableDictionary *_templates;	// 8 = 0x8
}

+ (id)transformURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000031189
+ (id)rollSchemaForward:(id)arg1;	// IMP=0x000000000002fad0
- (void).cxx_destruct;	// IMP=0x00000000000327ac
- (_Bool)transformLines:(id)arg1 withDefinitions:(id)arg2 body:(id)arg3 header:(id)arg4 error:(id *)arg5 streamingBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000002d514
- (_Bool)transformJSON:(id)arg1 header:(id)arg2 error:(id *)arg3 streamingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002d1fc
- (id)_getValueForKey:(id)arg1 fromBody:(id)arg2 orHeader:(id)arg3;	// IMP=0x000000000002cdd6
- (id)formatInstructionState:(id)arg1 index:(int)arg2;	// IMP=0x000000000002cafe
- (id)_hexDump:(id)arg1 offset:(int)arg2 indicator:(_Bool)arg3;	// IMP=0x000000000002c867
- (id)formatLastBranchState:(id)arg1 index:(int)arg2 withImages:(id)arg3;	// IMP=0x000000000002c54d
- (id)formatLastException:(id)arg1 withImages:(id)arg2;	// IMP=0x000000000002c2dd
- (id)formatX86ThreadState:(id)arg1 index:(int)arg2;	// IMP=0x000000000002b7c0
- (id)formatArm64ThreadState:(id)arg1 index:(int)arg2;	// IMP=0x000000000002a8b3
- (id)formatArm32ThreadState:(id)arg1 index:(int)arg2;	// IMP=0x000000000002a153
- (id)formatImages:(id)arg1 macosStyle:(_Bool)arg2;	// IMP=0x0000000000029a8e
- (id)formatCallstacks:(id)arg1 withImages:(id)arg2 macosStyle:(_Bool)arg3;	// IMP=0x0000000000029450
- (id)formatFrame:(id)arg1 withImages:(id)arg2 macosStyle:(_Bool)arg3;	// IMP=0x0000000000028ddf
- (_Bool)prepareTemplate:(id)arg1 forLogType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000028d5e
- (id)init;	// IMP=0x0000000000028d08

@end
