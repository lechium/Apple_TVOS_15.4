//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSConcreteSetChange
{
    unsigned long long _changeType;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

- (id)value;	// IMP=0x00000000001426e4
- (unsigned long long)changeType;	// IMP=0x00000000001426d3
- (void)dealloc;	// IMP=0x000000000014266e
- (id)initWithType:(unsigned long long)arg1 object:(id)arg2;	// IMP=0x00000000001425e2

@end

