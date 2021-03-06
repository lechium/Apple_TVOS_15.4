//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSIncomingMessage, NSDictionary, NSNumber, NSString;

@interface AKPushMessage : NSObject
{
    _Bool _isSilent;	// 8 = 0x8
    _Bool _requiresPasscode;	// 9 = 0x9
    APSIncomingMessage *_message;	// 16 = 0x10
    unsigned long long _command;	// 24 = 0x18
    NSString *_messageId;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
    NSString *_previousMessageId;	// 48 = 0x30
    NSString *_serverMachineId;	// 56 = 0x38
    NSString *_idmsData;	// 64 = 0x40
    NSDictionary *_userInfo;	// 72 = 0x48
    NSDictionary *_alertInfo;	// 80 = 0x50
    NSString *_alertTitle;	// 88 = 0x58
    NSString *_alertBody;	// 96 = 0x60
    NSString *_defaultButtonTitle;	// 104 = 0x68
    NSString *_alternateButtonTitle;	// 112 = 0x70
    NSString *_secondaryTitle;	// 120 = 0x78
    NSString *_secondaryBody;	// 128 = 0x80
    NSDictionary *_eventDetails;	// 136 = 0x88
    NSNumber *_latitude;	// 144 = 0x90
    NSNumber *_longitude;	// 152 = 0x98
    NSString *_deviceClass;	// 160 = 0xa0
    NSString *_deviceColor;	// 168 = 0xa8
    NSString *_deviceEnclosureColor;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x002000000002dc36
@property(readonly, nonatomic) NSString *deviceEnclosureColor; // @synthesize deviceEnclosureColor=_deviceEnclosureColor;
@property(readonly, nonatomic) NSString *deviceColor; // @synthesize deviceColor=_deviceColor;
@property(readonly, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) NSDictionary *eventDetails; // @synthesize eventDetails=_eventDetails;
@property(readonly, nonatomic) _Bool requiresPasscode; // @synthesize requiresPasscode=_requiresPasscode;
- (_Bool)isSilent;	// IMP=0x001000000002dbd6
@property(readonly, nonatomic) NSString *secondaryBody; // @synthesize secondaryBody=_secondaryBody;
@property(readonly, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(readonly, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(readonly, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(copy, nonatomic) NSString *alertBody; // @synthesize alertBody=_alertBody;
@property(copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(readonly, nonatomic) NSDictionary *alertInfo; // @synthesize alertInfo=_alertInfo;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *idmsData; // @synthesize idmsData=_idmsData;
@property(readonly, nonatomic) NSString *serverMachineId; // @synthesize serverMachineId=_serverMachineId;
@property(readonly, nonatomic) NSString *previousMessageId; // @synthesize previousMessageId=_previousMessageId;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) unsigned long long command; // @synthesize command=_command;
@property(readonly, nonatomic) APSIncomingMessage *message; // @synthesize message=_message;
- (id)description;	// IMP=0x001000000002daa5
- (_Bool)isValidMessage;	// IMP=0x001000000002da07
- (id)initWithMessage:(id)arg1;	// IMP=0x001000000002cd49

@end

