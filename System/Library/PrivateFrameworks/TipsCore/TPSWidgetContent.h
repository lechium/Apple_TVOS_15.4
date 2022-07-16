//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface TPSWidgetContent
{
    long long _priority;	// 8 = 0x8
    NSDictionary *_attributes;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000bb9d
- (void).cxx_destruct;	// IMP=0x000000000000c0a1
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (id)debugDescription;	// IMP=0x000000000000bf72
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000beaf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000bd5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bcc2
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000000bba5
- (long long)compare:(id)arg1;	// IMP=0x000000000000bb12
- (id)titleContent;	// IMP=0x000000000000b941

@end
