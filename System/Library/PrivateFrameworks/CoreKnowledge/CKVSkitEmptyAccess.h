//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/CKVSkitReadAccess-Protocol.h>

@class NSString;

@interface CKVSkitEmptyAccess : NSObject <CKVSkitReadAccess>
{
}

- (void)prewarm;	// IMP=0x00000000000ed81a
- (id)indexLocale;	// IMP=0x00000000000ed812
- (id)matchSpansOfTokenChain:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ed789

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

