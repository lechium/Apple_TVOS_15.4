//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface BSAuditHistory : NSObject <BSXPCCoding, NSSecureCoding, BSDescriptionProviding>
{
    NSMutableArray *_items;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000070510
- (void).cxx_destruct;	// IMP=0x0000000000070871
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000707e1
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000007077d
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000706f4
- (id)succinctDescription;	// IMP=0x0000000000070690
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000070608
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000070518
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x00000000000704ee
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000070430
- (void)addItemWithFormat:(id)arg1;	// IMP=0x00000000000702d7
- (void)addItem:(id)arg1;	// IMP=0x0000000000070287
@property(readonly, nonatomic) _Bool hasItems;
@property(readonly, nonatomic) NSArray *items;
- (id)init;	// IMP=0x00000000000701e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

