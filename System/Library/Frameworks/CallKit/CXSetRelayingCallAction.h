//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CXSetRelayingCallAction
{
    _Bool _relaying;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000344f5
@property(nonatomic, getter=isRelaying) _Bool relaying; // @synthesize relaying=_relaying;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000034596
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000344fd
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x000000000003446c
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034464
- (id)customDescription;	// IMP=0x00000000000343ec
- (id)initWithCallUUID:(id)arg1 relaying:(_Bool)arg2;	// IMP=0x00000000000343aa

@end

