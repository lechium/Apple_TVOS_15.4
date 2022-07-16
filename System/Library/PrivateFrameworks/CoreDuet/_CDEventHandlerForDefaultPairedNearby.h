//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDEventHandlerDelegate-Protocol.h>

@class NSString, _CDDataCollectionAnonymizer, _CDFileUtility;

@interface _CDEventHandlerForDefaultPairedNearby : NSObject <_CDEventHandlerDelegate>
{
    _CDDataCollectionAnonymizer *_anonymizer;	// 8 = 0x8
    _CDFileUtility *_utility;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a5e6d
@property(retain, nonatomic) _CDFileUtility *utility; // @synthesize utility=_utility;
@property(retain, nonatomic) _CDDataCollectionAnonymizer *anonymizer; // @synthesize anonymizer=_anonymizer;
- (void)eventHandler:(id)arg1 withFileHandle:(id)arg2;	// IMP=0x00000000000a5cdb
- (id)init;	// IMP=0x00000000000a5c10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

