//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSXPCConnection;

@interface EMFEmojiPreferencesClient
{
    NSXPCConnection *_connection;	// 88 = 0x58
    _Bool _isValid;	// 96 = 0x60
    NSString *_machName;	// 104 = 0x68
}

+ (id)serviceInterface;	// IMP=0x000000000000864d
- (void).cxx_destruct;	// IMP=0x0000000000008e63
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) NSString *machName; // @synthesize machName=_machName;
- (void)didDisplaySkinToneHelp;	// IMP=0x0000000000008d51
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;	// IMP=0x0000000000008c58
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3;	// IMP=0x0000000000008b2f
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;	// IMP=0x0000000000008b1a
- (void)didUseEmoji:(id)arg1;	// IMP=0x0000000000008b01
- (void)writeEmojiDefaultsAndNotify:(_Bool)arg1;	// IMP=0x0000000000008afb
- (void)writeEmojiDefaults;	// IMP=0x0000000000008af5
- (void)createConnectionIfNecessary;	// IMP=0x0000000000008864
- (void)dealloc;	// IMP=0x00000000000087df
- (void)_disconnect;	// IMP=0x0000000000008767
- (id)_initWithoutConnection;	// IMP=0x0000000000008704
- (id)initWithMachName:(id)arg1;	// IMP=0x000000000000866d

@end
