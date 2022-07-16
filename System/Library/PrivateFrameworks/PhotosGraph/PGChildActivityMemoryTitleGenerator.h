//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSSet, NSString;
@protocol OS_os_log;

@interface PGChildActivityMemoryTitleGenerator
{
    NSSet *_activityLabels;	// 8 = 0x8
    NSString *_childName;	// 16 = 0x10
    NSObject<OS_os_log> *_loggingConnection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001fb06c
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;	// IMP=0x00000000001fabec
- (id)initWithMomentNodes:(id)arg1 activityLabels:(id)arg2 childName:(id)arg3 titleGenerationContext:(id)arg4 loggingConnection:(id)arg5;	// IMP=0x00000000001fab0c

@end

