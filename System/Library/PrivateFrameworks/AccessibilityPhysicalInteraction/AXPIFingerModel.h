//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AXPIFingerModelDelegate;

@interface AXPIFingerModel : NSObject
{
    _Bool _pressed;	// 8 = 0x8
    _Bool _selected;	// 9 = 0x9
    double _force;	// 16 = 0x10
    unsigned long long _shape;	// 24 = 0x18
    id <AXPIFingerModelDelegate> _delegate;	// 32 = 0x20
    struct CGPoint _location;	// 40 = 0x28
}

+ (id)fingerModelForLocation:(struct CGPoint)arg1;	// IMP=0x0000000000005d99
- (void).cxx_destruct;	// IMP=0x000000000000622e
@property(retain, nonatomic) id <AXPIFingerModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) unsigned long long shape; // @synthesize shape=_shape;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
- (id)description;	// IMP=0x00000000000060dc
- (void)updateWithPropertiesFromFingerModel:(id)arg1;	// IMP=0x0000000000006017
- (void)setPressed:(_Bool)arg1 sendDelegateCallback:(_Bool)arg2;	// IMP=0x0000000000005df3

@end
