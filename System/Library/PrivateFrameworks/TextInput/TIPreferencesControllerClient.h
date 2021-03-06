//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSXPCConnection;

@interface TIPreferencesControllerClient
{
    NSXPCConnection *_connection;	// 56 = 0x38
    _Bool _writeable;	// 64 = 0x40
    _Bool _isValid;	// 65 = 0x41
    NSString *_machName;	// 72 = 0x48
}

+ (id)sharedPreferencesController;	// IMP=0x00000000000581b1
+ (id)serviceInterface;	// IMP=0x0000000000058191
- (void).cxx_destruct;	// IMP=0x00000000000580a9
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) NSString *machName; // @synthesize machName=_machName;
- (void)updateInputModes:(id)arg1;	// IMP=0x0000000000057fcb
- (void)performWithWriteability:(_Bool)arg1 operations:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057f9a
- (void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3;	// IMP=0x0000000000057f5e
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000057e32
- (void)createConnectionIfNecessary;	// IMP=0x0000000000057c35
- (void)dealloc;	// IMP=0x0000000000057bec
- (void)_disconnect;	// IMP=0x0000000000057ba8
- (id)init;	// IMP=0x0000000000057b38

@end

