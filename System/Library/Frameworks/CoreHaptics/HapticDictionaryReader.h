//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HapticDictionaryReader : NSObject
{
    unsigned long long _urlIndex;	// 8 = 0x8
}

- (id)parseParamCurveControlPoints:(id)arg1;	// IMP=0x000000000001aa44
- (id)parseParamCurve:(id)arg1;	// IMP=0x000000000001a545
- (id)parseParam:(id)arg1;	// IMP=0x000000000001a059
- (id)parseEventParams:(id)arg1;	// IMP=0x0000000000019bd3
- (id)parseEvent:(id)arg1;	// IMP=0x00000000000190e4
- (_Bool)parseEventsAndParameters:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000018764
- (id)scanForEmbeddedResources:(id)arg1;	// IMP=0x00000000000181a6
- (id)parseConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000017b04
- (id)readAndVerifyVersion:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000017759
- (id)readPatternID:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000174cf

@end
