//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FigCaptureMachPortSendRight : NSObject
{
    unsigned int _port;	// 8 = 0x8
    _Bool _invalid;	// 12 = 0xc
}

@property(readonly, nonatomic) unsigned int port; // @synthesize port=_port;
- (id)description;	// IMP=0x0000000000013d25
- (void)dealloc;	// IMP=0x0000000000013ce7
- (void)invalidate;	// IMP=0x0000000000013cad
- (id)initWithPort:(unsigned int)arg1;	// IMP=0x0000000000013c60

@end

