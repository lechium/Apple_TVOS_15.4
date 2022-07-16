//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, TKSmartCard, TKSmartCardPINFormat;

@interface TKTokenSmartCardPINAuthOperation
{
    TKSmartCardPINFormat *_PINFormat;	// 8 = 0x8
    NSData *_APDUTemplate;	// 16 = 0x10
    long long _PINByteOffset;	// 24 = 0x18
    TKSmartCard *_smartCard;	// 32 = 0x20
    NSString *_PIN;	// 40 = 0x28
    NSString *_localizedPINLabel;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001e233
- (void).cxx_destruct;	// IMP=0x000000000001ecbe
@property(copy) NSString *localizedPINLabel; // @synthesize localizedPINLabel=_localizedPINLabel;
@property(copy) NSString *PIN; // @synthesize PIN=_PIN;
@property(retain) TKSmartCard *smartCard; // @synthesize smartCard=_smartCard;
@property long long PINByteOffset; // @synthesize PINByteOffset=_PINByteOffset;
@property(copy) NSData *APDUTemplate; // @synthesize APDUTemplate=_APDUTemplate;
@property(retain) TKSmartCardPINFormat *PINFormat; // @synthesize PINFormat=_PINFormat;
- (void)importOperation:(id)arg1;	// IMP=0x000000000001eab3
- (Class)baseClassForUI;	// IMP=0x000000000001eaa2
- (_Bool)finishWithError:(id *)arg1;	// IMP=0x000000000001e663
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001e49e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001e23b
- (id)init;	// IMP=0x000000000001e1d6

@end
