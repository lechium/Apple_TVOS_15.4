//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriSessionStore/_TtP22SiriSessionStoreClient18SiriSessionService_-Protocol.h>

@interface _TtC16SiriSessionStore19SessionStoreService : NSObject <_TtP22SiriSessionStoreClient18SiriSessionService_>
{
}

- (void)clearSessionStateForId:(id)arg1;	// IMP=0x000000000000f580
- (void)getValueForId:(id)arg1 forKey:(id)arg2 withValue:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f4b0
- (void)getValuesForId:(id)arg1 forKeys:(id)arg2 withValues:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f1c0
- (void)getLastCommittedValuesForId:(id)arg1 withValues:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ef50
- (void)writeValuesForId:(id)arg1 values:(id)arg2;	// IMP=0x000000000000ecb0
- (id)init;	// IMP=0x000000000000ec70

@end
