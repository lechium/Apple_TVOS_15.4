//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PreviewsServices/BSXPCSecureCoding-Protocol.h>
#import <PreviewsServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface UVPropertyList : NSObject <NSSecureCoding, BSXPCSecureCoding>
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x000000000000214a
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000211e
- (void).cxx_destruct;	// IMP=0x0000000000002180
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000002164
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x0000000000002152
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002138
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002126
- (id)_initWithAnyCoder:(id)arg1;	// IMP=0x0000000000001d10
- (void)_encodeWithAnyCoder:(id)arg1;	// IMP=0x0000000000001c37
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000001bcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

