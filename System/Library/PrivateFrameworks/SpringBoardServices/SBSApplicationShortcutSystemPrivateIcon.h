//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SBSApplicationShortcutSystemPrivateIcon
{
    NSString *_systemImageName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002ee85
@property(readonly, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000002ee11
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000002ed94
- (unsigned long long)hash;	// IMP=0x000000000002ed50
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002ec19
- (id)_initForSubclass;	// IMP=0x000000000002eb88
- (id)initWithSystemImageName:(id)arg1;	// IMP=0x000000000002eb0e

@end
