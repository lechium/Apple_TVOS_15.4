//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CUDashboardClient : NSObject
{
    NSString *_server;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004a4b2
@property(copy, nonatomic) NSString *server; // @synthesize server=_server;
- (int)_logCStr:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000004a491
- (int)logv:(const char *)arg1 args:(struct __va_list_tag [1])arg2;	// IMP=0x000000000004a489
- (int)logf:(const char *)arg1;	// IMP=0x000000000004a481
- (int)logJSON:(id)arg1;	// IMP=0x000000000004a479
- (void)invalidate;	// IMP=0x000000000004a473
- (int)activate;	// IMP=0x000000000004a46b

@end
