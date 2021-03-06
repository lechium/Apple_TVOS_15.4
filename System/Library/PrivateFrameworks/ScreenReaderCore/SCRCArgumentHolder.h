//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCRCArgumentHolder : NSObject
{
    _Bool _required;	// 8 = 0x8
    NSString *_option;	// 16 = 0x10
    NSString *_argument;	// 24 = 0x18
    NSString *_argumentDescription;	// 32 = 0x20
    id _target;	// 40 = 0x28
    SEL _action;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000277f
@property(readonly, nonatomic) _Bool required; // @synthesize required=_required;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, copy, nonatomic) NSString *argumentDescription; // @synthesize argumentDescription=_argumentDescription;
@property(copy, nonatomic) NSString *argument; // @synthesize argument=_argument;
@property(readonly, copy, nonatomic) NSString *option; // @synthesize option=_option;
- (long long)compare:(id)arg1;	// IMP=0x0000000000002693
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002602
- (_Bool)process;	// IMP=0x00000000000024cc
- (id)initWithArgument:(id)arg1 option:(id)arg2 description:(id)arg3 target:(id)arg4 action:(SEL)arg5 required:(_Bool)arg6;	// IMP=0x00000000000023df
- (id)init;	// IMP=0x00000000000023a3

@end

