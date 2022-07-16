//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SASyncAnchor;

@interface SASyncDebugInfo <SAAceSerializable>
{
}

+ (id)debugInfoWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000001d09
+ (id)debugInfo;	// IMP=0x0000000000001cf7
@property(retain, nonatomic) SASyncAnchor *syncAnchor;
@property(copy, nonatomic) NSArray *objectIds;
- (id)encodedClassName;	// IMP=0x0000000000001cea
- (id)groupIdentifier;	// IMP=0x0000000000001cd6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
