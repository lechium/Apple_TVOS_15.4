//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SAUITemplateTabularDataRowStyleRule <SAAceSerializable>
{
}

+ (id)tabularDataRowStyleRuleWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000027541
+ (id)tabularDataRowStyleRule;	// IMP=0x000000000002752f
@property(copy, nonatomic) NSNumber *showTopBorder;
@property(copy, nonatomic) NSNumber *rowStartIndex;
@property(copy, nonatomic) NSNumber *rowCount;
@property(copy, nonatomic) NSNumber *minimumHeight;
- (id)encodedClassName;	// IMP=0x0000000000027522
- (id)groupIdentifier;	// IMP=0x000000000002750e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

