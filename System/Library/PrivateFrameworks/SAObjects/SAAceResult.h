//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;
@protocol SAAceSerializable;

@interface SAAceResult <SAAceSerializable>
{
}

+ (id)aceResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003c951
+ (id)aceResult;	// IMP=0x000000000003c93f
@property(retain, nonatomic) id <SAAceSerializable> result;
- (id)encodedClassName;	// IMP=0x000000000003c932
- (id)groupIdentifier;	// IMP=0x000000000003c91e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

