//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SASupportCondition-Protocol.h>

@class NSArray, NSString;

@interface SAValueCondition <SASupportCondition>
{
}

+ (id)valueConditionWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003915b
+ (id)valueCondition;	// IMP=0x0000000000039149
@property(copy, nonatomic) NSArray *legalValues;
- (id)encodedClassName;	// IMP=0x000000000003913c
- (id)groupIdentifier;	// IMP=0x0000000000039128

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

