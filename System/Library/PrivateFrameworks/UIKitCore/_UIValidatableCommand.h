//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UICommand, UICommandAlternate;

__attribute__((visibility("hidden")))
@interface _UIValidatableCommand
{
    UICommand *_command;	// 80 = 0x50
    UICommandAlternate *_alternate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000dd5d0b
- (void)useCommand:(id)arg1 alternate:(id)arg2;	// IMP=0x0000000000dd5bb7
- (id)init;	// IMP=0x0000000000dd5b56
- (id)alternates;	// IMP=0x0000000000dd5b39
- (id)propertyList;	// IMP=0x0000000000dd5b1c
- (SEL)action;	// IMP=0x0000000000dd5ada

@end

