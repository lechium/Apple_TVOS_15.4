//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@class NSString;

@interface NSMutableDictionary (IDSPreflightStackStore)
- (void)clearAllPreflightStacks;	// IMP=0x002000000024a780
- (void)setPreflightStack:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x001000000024a6d0
- (id)preflightStackForIdentifier:(id)arg1;	// IMP=0x001000000024a660

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

