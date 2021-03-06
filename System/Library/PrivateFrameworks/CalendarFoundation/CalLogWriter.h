//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalLogWriter-Protocol.h>

@class NSString;
@protocol CalLogFormatter;

@interface CalLogWriter : NSObject <CalLogWriter>
{
    id <CalLogFormatter> _formatter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000589b0
@property(retain, nonatomic) id <CalLogFormatter> formatter; // @synthesize formatter=_formatter;
- (_Bool)flush;	// IMP=0x0000000000058997
- (void)write:(id)arg1;	// IMP=0x0000000000058991
@property(readonly, copy) NSString *description;
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000024eb
- (id)init;	// IMP=0x0000000000058928

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

