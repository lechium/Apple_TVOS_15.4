//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFWorkflowDatabaseRunDescriptor
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014f27
- (void).cxx_destruct;	// IMP=0x0000000000014ef6
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014e26
- (id)description;	// IMP=0x0000000000014d5d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014c98
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x0000000000014bc2
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000014b03
- (id)initWithName:(id)arg1;	// IMP=0x0000000000014a44

@end

