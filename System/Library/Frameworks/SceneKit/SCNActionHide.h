//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNActionHide
{
    struct SCNCActionHide *_mycaction;	// 8 = 0x8
}

+ (id)unhide;	// IMP=0x000000000000bdfe
+ (id)hide;	// IMP=0x000000000000bdb6
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000bdae
- (id)parameters;	// IMP=0x000000000000bf0d
- (id)reversedAction;	// IMP=0x000000000000bec1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000be46
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000bd4d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000bc56
- (id)init;	// IMP=0x000000000000bb76

@end

