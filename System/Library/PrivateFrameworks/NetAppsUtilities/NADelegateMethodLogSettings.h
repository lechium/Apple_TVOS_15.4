//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_os_log;

@interface NADelegateMethodLogSettings : NSObject
{
    unsigned char _logType;	// 8 = 0x8
    NSObject<OS_os_log> *_log;	// 16 = 0x10
    CDUnknownBlockType _argumentFormatter;	// 24 = 0x18
    CDUnknownBlockType _logger;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001594c
@property(copy, nonatomic) CDUnknownBlockType logger; // @synthesize logger=_logger;
@property(readonly, copy, nonatomic) CDUnknownBlockType argumentFormatter; // @synthesize argumentFormatter=_argumentFormatter;
@property(readonly, nonatomic) unsigned char logType; // @synthesize logType=_logType;
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (id)formattedDescriptionForArgument:(id)arg1;	// IMP=0x00000000000158d4
- (id)initWithLog:(id)arg1 logType:(unsigned char)arg2 argumentFormatter:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015820
- (id)init;	// IMP=0x0000000000015812

@end
