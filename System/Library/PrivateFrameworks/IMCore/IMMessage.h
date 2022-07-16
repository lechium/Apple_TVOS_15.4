//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMCore/NSCopying-Protocol.h>

@class IMHandle, IMMessageItem, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSError, NSString;

@interface IMMessage : NSObject <NSCopying>
{
    IMHandle *_sender;	// 8 = 0x8
    IMHandle *_subject;	// 16 = 0x10
    NSAttributedString *_text;	// 24 = 0x18
    NSString *_plainBody;	// 32 = 0x20
    NSDate *_time;	// 40 = 0x28
    NSDate *_timeDelivered;	// 48 = 0x30
    NSDate *_timeRead;	// 56 = 0x38
    NSDate *_timePlayed;	// 64 = 0x40
    NSString *_guid;	// 72 = 0x48
    NSAttributedString *_messageSubject;	// 80 = 0x50
    NSArray *_fileTransferGUIDs;	// 88 = 0x58
    NSError *_error;	// 96 = 0x60
    NSString *_balloonBundleID;	// 104 = 0x68
    NSData *_payloadData;	// 112 = 0x70
    NSString *_expressiveSendStyleID;	// 120 = 0x78
    NSDate *_timeExpressiveSendPlayed;	// 128 = 0x80
    unsigned long long _flags;	// 136 = 0x88
    _Bool _isInvitationMessage;	// 144 = 0x90
    long long _messageID;	// 152 = 0x98
    NSDictionary *_bizIntent;	// 160 = 0xa0
    NSString *_locale;	// 168 = 0xa8
    _Bool _isAddressedToMe;	// 176 = 0xb0
    _Bool _hasMention;	// 177 = 0xb1
    _Bool _isSOS;	// 178 = 0xb2
    _Bool _useStandalone;	// 179 = 0xb3
    NSString *_associatedMessageGUID;	// 184 = 0xb8
    long long _associatedMessageType;	// 192 = 0xc0
    NSDictionary *_messageSummaryInfo;	// 200 = 0xc8
    NSString *_threadIdentifier;	// 208 = 0xd0
    IMMessage *_threadOriginator;	// 216 = 0xd8
    NSDictionary *_replyCountsByPart;	// 224 = 0xe0
    NSArray *_syndicationRanges;	// 232 = 0xe8
    NSArray *_syncedSyndicationRanges;	// 240 = 0xf0
    NSString *_associatedBalloonBundleID;	// 248 = 0xf8
    NSString *_sourceApplicationID;	// 256 = 0x100
    NSData *_customTypingIndicatorIcon;	// 264 = 0x108
    NSString *_notificationIDSTokenURI;	// 272 = 0x110
    unsigned long long _sortID;	// 280 = 0x118
    struct _NSRange _associatedMessageRange;	// 288 = 0x120
}

+ (id)determineRichLinksInMessage:(id)arg1 additionalSupportedSchemes:(id)arg2;	// IMP=0x00000000000cf029
+ (id)determineRichLinksInMessage:(id)arg1;	// IMP=0x00000000000cf015
+ (_Bool)supportedRichLinkURL:(id)arg1 additionalSupportedSchemes:(id)arg2;	// IMP=0x00000000000cefa3
+ (_Bool)hasKnownSchemesForRichLinkURL:(id)arg1 additionalSupportedSchemes:(id)arg2;	// IMP=0x00000000000cec9d
+ (_Bool)hasKnownSchemesForRichLinkURL:(id)arg1;	// IMP=0x00000000000cec89
+ (Class)richLinksDataSourceClass;	// IMP=0x00000000000cec32
+ (id)messageFromIMMessageItemDictionary:(id)arg1 body:(id)arg2 sender:(id)arg3 subject:(id)arg4;	// IMP=0x00000000000ce23a
+ (id)messageFromIMMessageItem:(id)arg1 sender:(id)arg2 subject:(id)arg3;	// IMP=0x00000000000cdbea
+ (id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;	// IMP=0x00000000000ca92d
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4 balloonBundleID:(id)arg5 payloadData:(id)arg6 expressiveSendStyleID:(id)arg7;	// IMP=0x00000000000ca767
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4 threadIdentifier:(id)arg5;	// IMP=0x00000000000ca5df
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3 expressiveSendStyleID:(id)arg4 threadIdentifier:(id)arg5;	// IMP=0x00000000000ca474
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3 expressiveSendStyleID:(id)arg4;	// IMP=0x00000000000ca451
+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3 threadIdentifier:(id)arg4;	// IMP=0x00000000000ca42f
+ (id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2 threadIdentifier:(id)arg3;	// IMP=0x00000000000ca415
+ (id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000000000ca31f
+ (id)locatingMessageWithGuid:(id)arg1 error:(id)arg2;	// IMP=0x00000000000d257e
+ (id)messageWithLocation:(id)arg1 flags:(unsigned long long)arg2 error:(id)arg3 guid:(id)arg4;	// IMP=0x00000000000d2576
+ (id)_vCardDataWithCLLocation:(id)arg1;	// IMP=0x00000000000d2569
+ (id)breadcrumbMessageWithText:(id)arg1 associatedMessageGUID:(id)arg2 balloonBundleID:(id)arg3 fileTransferGUIDs:(id)arg4 payloadData:(id)arg5 threadIdentifier:(id)arg6;	// IMP=0x00000000000d2cbf
+ (id)editedMessageWithOriginalMessage:(id)arg1 originalPrefixedGUID:(id)arg2 newBody:(id)arg3;	// IMP=0x00000000000d2a1d
+ (id)instantMessageWithAssociatedMessageContent:(id)arg1 flags:(unsigned long long)arg2 associatedMessageGUID:(id)arg3 associatedMessageType:(long long)arg4 associatedMessageRange:(struct _NSRange)arg5 messageSummaryInfo:(id)arg6 threadIdentifier:(id)arg7;	// IMP=0x00000000000d28a4
- (void).cxx_destruct;	// IMP=0x00000000000d2204
@property(nonatomic) unsigned long long sortID; // @synthesize sortID=_sortID;
@property(nonatomic) _Bool useStandalone; // @synthesize useStandalone=_useStandalone;
@property(nonatomic) _Bool isSOS; // @synthesize isSOS=_isSOS;
@property(retain, nonatomic) NSString *notificationIDSTokenURI; // @synthesize notificationIDSTokenURI=_notificationIDSTokenURI;
@property(retain, nonatomic) NSData *customTypingIndicatorIcon; // @synthesize customTypingIndicatorIcon=_customTypingIndicatorIcon;
@property(nonatomic) _Bool hasMention; // @synthesize hasMention=_hasMention;
@property(readonly, nonatomic) _Bool isAddressedToMe; // @synthesize isAddressedToMe=_isAddressedToMe;
@property(retain, nonatomic) NSDate *timeExpressiveSendPlayed; // @synthesize timeExpressiveSendPlayed=_timeExpressiveSendPlayed;
@property(retain, nonatomic) NSString *expressiveSendStyleID; // @synthesize expressiveSendStyleID=_expressiveSendStyleID;
@property(retain, nonatomic) NSString *sourceApplicationID; // @synthesize sourceApplicationID=_sourceApplicationID;
@property(retain, nonatomic) NSString *associatedBalloonBundleID; // @synthesize associatedBalloonBundleID=_associatedBalloonBundleID;
@property(retain, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property(retain, nonatomic) NSString *balloonBundleID; // @synthesize balloonBundleID=_balloonBundleID;
@property(copy, nonatomic, setter=_syncedSyndicationRanges:) NSArray *syncedSyndicationRanges; // @synthesize syncedSyndicationRanges=_syncedSyndicationRanges;
@property(copy, nonatomic, setter=_syndicationRanges:) NSArray *syndicationRanges; // @synthesize syndicationRanges=_syndicationRanges;
@property(retain, nonatomic) NSDictionary *replyCountsByPart; // @synthesize replyCountsByPart=_replyCountsByPart;
@property(retain, nonatomic) IMMessage *threadOriginator; // @synthesize threadOriginator=_threadOriginator;
@property(copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(retain, nonatomic, setter=_updateLocale:) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic, setter=_updateBizIntent:) NSDictionary *bizIntent; // @synthesize bizIntent=_bizIntent;
@property(copy, nonatomic, setter=_messageSummaryInfo:) NSDictionary *messageSummaryInfo; // @synthesize messageSummaryInfo=_messageSummaryInfo;
@property(nonatomic, setter=_associatedMessageRange:) struct _NSRange associatedMessageRange; // @synthesize associatedMessageRange=_associatedMessageRange;
@property(nonatomic, setter=_associatedMessageType:) long long associatedMessageType; // @synthesize associatedMessageType=_associatedMessageType;
@property(copy, nonatomic, setter=_associatedMessageGUID:) NSString *associatedMessageGUID; // @synthesize associatedMessageGUID=_associatedMessageGUID;
@property(retain, nonatomic, setter=_updateTimePlayed:) NSDate *timePlayed; // @synthesize timePlayed=_timePlayed;
@property(retain, nonatomic, setter=_updateTimeRead:) NSDate *timeRead; // @synthesize timeRead=_timeRead;
@property(retain, nonatomic, setter=_updateTimeDelivered:) NSDate *timeDelivered; // @synthesize timeDelivered=_timeDelivered;
@property(copy, nonatomic, setter=_updateFileTransferGUIDs:) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;
@property(nonatomic) _Bool isInvitationMessage; // @synthesize isInvitationMessage=_isInvitationMessage;
@property(retain, nonatomic, setter=_updateError:) NSError *error; // @synthesize error=_error;
@property(nonatomic, setter=_updateFlags:) unsigned long long flags; // @synthesize flags=_flags;
@property(nonatomic, setter=_updateMessageID:) long long messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic, setter=_updateGUID:) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic, setter=_updateText:) NSAttributedString *text; // @synthesize text=_text;
@property(retain, nonatomic, setter=_updateTime:) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) NSAttributedString *messageSubject; // @synthesize messageSubject=_messageSubject;
@property(readonly, nonatomic) IMHandle *subject; // @synthesize subject=_subject;
@property(retain, nonatomic, setter=_updateSender:) IMHandle *sender; // @synthesize sender=_sender;
- (void)_ovverrideGUIDForTest:(id)arg1;	// IMP=0x00000000000d1e22
- (id)description;	// IMP=0x00000000000d1760
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d0cf0
- (id)messagesSeparatedByByteLength:(long long)arg1;	// IMP=0x00000000000d0938
- (id)messagesBySeparatingRichLinks;	// IMP=0x00000000000cf771
@property(readonly, nonatomic) IMMessageItem *_imMessageItem;
- (long long)compare:(id)arg1 comparisonType:(long long)arg2;	// IMP=0x00000000000ccd3a
- (long long)compare:(id)arg1;	// IMP=0x00000000000ccd2b
- (_Bool)isReply;	// IMP=0x00000000000ccbf4
@property(readonly, nonatomic) _Bool didNotifyRecipient;
@property(readonly, nonatomic) _Bool wasDeliveredQuietly;
@property(readonly, nonatomic) _Bool wasDataDetected;
@property(readonly, nonatomic) _Bool wasDowngraded;
@property(readonly, nonatomic) _Bool isAlert;
@property(readonly, nonatomic) _Bool isSystemMessage;
@property(readonly, nonatomic) _Bool isPlayed;
@property(readonly, nonatomic) _Bool isAudioMessage;
@property(readonly, nonatomic) _Bool isRead;
@property(readonly, nonatomic) _Bool isDelivered;
@property(readonly, nonatomic) _Bool isAutoReply;
@property(readonly, nonatomic) _Bool isDelayed;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic, getter=isSenderUnknown) _Bool senderUnknown;
@property(readonly, nonatomic) _Bool isFromMe;
@property(readonly, nonatomic) _Bool isEmote;
@property(readonly, nonatomic) NSArray *inlineAttachmentAttributesArray;
@property(readonly, nonatomic) _Bool hasInlineAttachments;
@property(readonly, nonatomic) _Bool isSent;
@property(readonly, nonatomic) _Bool isLocatingMessage;
@property(readonly, nonatomic) _Bool isTypingMessage;
@property(readonly, nonatomic) _Bool isFinished;
@property(readonly, nonatomic) _Bool hasDataDetectorResults;
@property(readonly, nonatomic) NSString *summaryString;
@property(readonly, nonatomic) NSString *senderName;
@property(readonly, nonatomic) NSString *plainBody;
- (id)initWithSender:(id)arg1 fileTransfer:(id)arg2;	// IMP=0x00000000000cbf4d
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 associatedMessageGUID:(id)arg10 associatedMessageType:(long long)arg11 associatedMessageRange:(struct _NSRange)arg12 messageSummaryInfo:(id)arg13 threadIdentifier:(id)arg14;	// IMP=0x00000000000cbec6
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 associatedMessageGUID:(id)arg10 associatedMessageType:(long long)arg11 associatedMessageRange:(struct _NSRange)arg12 messageSummaryInfo:(id)arg13;	// IMP=0x00000000000cbe39
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 balloonBundleID:(id)arg10 payloadData:(id)arg11 expressiveSendStyleID:(id)arg12 threadIdentifier:(id)arg13;	// IMP=0x00000000000cbda8
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 balloonBundleID:(id)arg10 payloadData:(id)arg11 expressiveSendStyleID:(id)arg12;	// IMP=0x00000000000cbd23
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 threadIdentifier:(id)arg9;	// IMP=0x00000000000cbc91
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8;	// IMP=0x00000000000cbc0b
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 threadIdentifier:(id)arg10;	// IMP=0x00000000000cbb7e
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9;	// IMP=0x00000000000cbafb
- (id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 plainText:(id)arg6 text:(id)arg7 messageSubject:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(unsigned long long)arg10 error:(id)arg11 guid:(id)arg12 messageID:(long long)arg13 subject:(id)arg14 balloonBundleID:(id)arg15 payloadData:(id)arg16 expressiveSendStyleID:(id)arg17 timeExpressiveSendPlayed:(id)arg18 associatedMessageGUID:(id)arg19 associatedMessageType:(long long)arg20 associatedMessageRange:(struct _NSRange)arg21 messageSummaryInfo:(id)arg22 threadIdentifier:(id)arg23;	// IMP=0x00000000000cb099
- (id)_copyWithFlags:(unsigned long long)arg1;	// IMP=0x00000000000cb05a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000caad4
- (id)descriptionForPurpose:(long long)arg1 inChat:(id)arg2 senderDisplayName:(id)arg3;	// IMP=0x000000000006148c
- (id)descriptionForPurpose:(long long)arg1 inChat:(id)arg2;	// IMP=0x00000000000612f8
- (id)descriptionForPurpose:(long long)arg1;	// IMP=0x00000000000610c6
- (id)richLinkDataSourceWithChatContext:(id)arg1;	// IMP=0x00000000000d23f7
@property(readonly, nonatomic) _Bool isRichLinkMessage;
@property(readonly, nonatomic) _Bool isAssociatedMessage;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9 associatedMessageGUID:(id)arg10 associatedMessageType:(long long)arg11 associatedMessageRange:(struct _NSRange)arg12 associatedMessageInfo:(id)arg13;	// IMP=0x00000000000d2e9f

@end
