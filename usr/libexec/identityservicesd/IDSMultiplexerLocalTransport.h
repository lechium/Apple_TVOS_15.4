//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSMultiplexerLocalTransport : NSObject
{
}

- (void)invalidate;	// IMP=0x004000000020ec50
- (void)setFanoutEncryptionManager:(id)arg1;	// IMP=0x001000000020ec10
- (id)fanoutEncryptionManager;	// IMP=0x001000000020ec00
- (void)setPacketBufferReadHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000020ebc0
- (_Bool)tryConsumePacketBuffer:(CDStruct_727fadec *)arg1;	// IMP=0x001000000020eba0
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000020eb50

@end

