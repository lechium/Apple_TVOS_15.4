//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSStream.h>

@interface NSStream (NSStream)
+ (void)getStreamsToHost:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;	// IMP=0x00000000001313e4
+ (void)getStreamsToHostWithName:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;	// IMP=0x0000000000131331
+ (void)getBoundStreamsWithBufferSize:(unsigned long long)arg1 inputStream:(id *)arg2 outputStream:(id *)arg3;	// IMP=0x0000000000131514
- (id)streamError;	// IMP=0x00000000001306c6
- (unsigned long long)streamStatus;	// IMP=0x0000000000130695
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000013066a
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000013063f
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000130611
- (id)propertyForKey:(id)arg1;	// IMP=0x00000000001305e3
- (void)setDelegate:(id)arg1;	// IMP=0x00000000001305b8
- (id)delegate;	// IMP=0x000000000013058a
- (void)close;	// IMP=0x000000000013055f
- (void)open;	// IMP=0x0000000000130534
- (id)init;	// IMP=0x000000000013048d
@end

