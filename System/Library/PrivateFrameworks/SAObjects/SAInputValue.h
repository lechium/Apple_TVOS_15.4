//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAInputValue <SAAceSerializable>
{
}

+ (id)inputValueWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000018c30
+ (id)inputValue;	// IMP=0x0000000000018c1e
@property(copy, nonatomic) NSString *inputValue;
- (id)encodedClassName;	// IMP=0x0000000000018c11
- (id)groupIdentifier;	// IMP=0x0000000000018bfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
