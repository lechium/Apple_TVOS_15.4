//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TILexiconDataHandler : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000624f
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)addEntryString:(id)arg1 forRecentInputIdentifier:(id)arg2;	// IMP=0x001000000000610a
- (_Bool)checkEntitlementForAddEntryStringWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0010000000006102
- (void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1;	// IMP=0x0010000000006058
- (void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005f85
- (void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000059ef
- (void)addContact:(id)arg1 toEntries:(id)arg2 usingTokenizer:(id)arg3;	// IMP=0x001000000000577b
- (void)finishRequestWithEntries:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000569f
- (_Bool)validateBundlePath:(id)arg1;	// IMP=0x0010000000005488

@end

