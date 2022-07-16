//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCalendar/ICSInputByteStream-Protocol.h>

@class NSString;
@protocol ICSInputByteStream;

@interface ICSPushbackStream : NSObject <ICSInputByteStream>
{
    id <ICSInputByteStream> _underStream;	// 8 = 0x8
    char *_pbData;	// 16 = 0x10
    int _pbCursor;	// 24 = 0x18
    _Bool _readPastEOS;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000013c9a
- (_Bool)eos;	// IMP=0x0000000000013c7a
- (BOOL)read;	// IMP=0x0000000000013c26
- (_Bool)pushBack:(BOOL)arg1;	// IMP=0x0000000000013b21
- (BOOL)peek;	// IMP=0x0000000000013a3d
- (void)dealloc;	// IMP=0x0000000000013a03
- (id)initWithInputStream:(id)arg1;	// IMP=0x0000000000013956

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
