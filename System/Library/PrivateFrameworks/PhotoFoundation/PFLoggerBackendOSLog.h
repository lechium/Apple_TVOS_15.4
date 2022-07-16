//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface PFLoggerBackendOSLog
{
    NSMutableDictionary *_osLogs;	// 8 = 0x8
    NSString *_sender;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
}

+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;	// IMP=0x000000000002796b
- (void).cxx_destruct;	// IMP=0x000000000002793a
- (void)_logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 type:(unsigned int)arg3;	// IMP=0x0000000000027783
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(struct __va_list_tag [1])arg7;	// IMP=0x0000000000027670
- (_Bool)outputsToDebuggerConsole;	// IMP=0x000000000002765e
- (_Bool)formatsMessage;	// IMP=0x0000000000027656
- (_Bool)allowsConcurrentAccess;	// IMP=0x000000000002764e
- (id)initWithSender:(id)arg1;	// IMP=0x00000000000275a1

@end
