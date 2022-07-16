//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DOMKeyboardEvent
{
}

- (void)initKeyboardEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(_Bool)arg7 altKey:(_Bool)arg8 shiftKey:(_Bool)arg9 metaKey:(_Bool)arg10;	// IMP=0x00000000000871b0
- (void)initKeyboardEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 keyLocation:(unsigned int)arg6 ctrlKey:(_Bool)arg7 altKey:(_Bool)arg8 shiftKey:(_Bool)arg9 metaKey:(_Bool)arg10 altGraphKey:(_Bool)arg11;	// IMP=0x0000000000086ef0
- (void)initKeyboardEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(_Bool)arg7 altKey:(_Bool)arg8 shiftKey:(_Bool)arg9 metaKey:(_Bool)arg10;	// IMP=0x0000000000086c30
- (void)initKeyboardEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 keyIdentifier:(id)arg5 location:(unsigned int)arg6 ctrlKey:(_Bool)arg7 altKey:(_Bool)arg8 shiftKey:(_Bool)arg9 metaKey:(_Bool)arg10 altGraphKey:(_Bool)arg11;	// IMP=0x0000000000086970
- (_Bool)getModifierState:(id)arg1;	// IMP=0x0000000000086820
@property(readonly) int charCode;
@property(readonly) int keyCode;
@property(readonly) _Bool altGraphKey;
@property(readonly) _Bool metaKey;
@property(readonly) _Bool altKey;
@property(readonly) _Bool shiftKey;
@property(readonly) _Bool ctrlKey;
@property(readonly) unsigned int keyLocation;
@property(readonly) unsigned int location;
@property(readonly, copy) NSString *keyIdentifier;

@end

