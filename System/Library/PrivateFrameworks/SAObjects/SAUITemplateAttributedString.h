//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SAUITemplateAttributedString <SAAceSerializable>
{
}

+ (id)attributedStringWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000018757
+ (id)attributedString;	// IMP=0x0000000000018745
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSArray *attributeRuns;
- (id)encodedClassName;	// IMP=0x0000000000018738
- (id)groupIdentifier;	// IMP=0x0000000000018724

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
