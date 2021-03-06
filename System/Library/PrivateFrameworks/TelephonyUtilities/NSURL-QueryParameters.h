//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

#import <TelephonyUtilities/TUSanitizedCopying-Protocol.h>

@class NSString;

@interface NSURL (QueryParameters) <TUSanitizedCopying>
+ (id)screenSharingAppURL;	// IMP=0x0000000000012cd9
+ (id)faceTimeAppJoinConversationURLForConversationLinkURL:(id)arg1;	// IMP=0x0000000000011a36
+ (id)faceTimeAppViewLinkDetailsURLForPseudonym:(id)arg1;	// IMP=0x00000000000118aa
+ (id)faceTimeAnswerURLWithSourceIdentifier:(id)arg1;	// IMP=0x00000000000117e4
+ (id)faceTimeUpdateForegroundAppURLForBundleIdentifier:(id)arg1 applicationType:(long long)arg2;	// IMP=0x00000000000115e7
+ (id)faceTimeAppJoinConversationLinkURL;	// IMP=0x000000000001153e
+ (id)faceTimeAppViewLinkDetailsURL;	// IMP=0x0000000000011495
+ (id)faceTimeUpdateForegroundAppURL;	// IMP=0x00000000000113ec
+ (id)faceTimeShowSystemCallControlsURL;	// IMP=0x0000000000011343
+ (id)faceTimeShowCarPlayInCallUIURL;	// IMP=0x000000000001129a
+ (id)faceTimeShowInCallUIURL;	// IMP=0x00000000000111f1
+ (id)faceTimeLaunchForOutgoingConversationURL;	// IMP=0x0000000000011148
+ (id)faceTimeLaunchForIncomingCallURL;	// IMP=0x000000000001109f
+ (id)faceTimePromptURLWithURL:(id)arg1;	// IMP=0x0000000000010fdd
+ (id)faceTimeURLWithURL:(id)arg1;	// IMP=0x0000000000010fba
+ (id)_applyFaceTimeScheme:(id)arg1 toFaceTimeURL:(id)arg2;	// IMP=0x0000000000010e78
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1 showPrompt:(_Bool)arg2;	// IMP=0x0000000000010d3e
+ (id)faceTimeTelephonyURLWithPhoneNumber:(id)arg1;	// IMP=0x0000000000010d2a
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5 audioOnly:(_Bool)arg6;	// IMP=0x0000000000010b7d
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x0000000000010b64
+ (id)faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x0000000000010b48
+ (id)faceTimeURLWithDestinationID:(id)arg1;	// IMP=0x0000000000010b27
+ (id)_faceTimeURLWithHandle:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x00000000000108e5
+ (id)_faceTimeURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3;	// IMP=0x000000000001086b
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 audioOnly:(_Bool)arg3 forceAssist:(_Bool)arg4 suppressAssist:(_Bool)arg5 wasAssisted:(_Bool)arg6;	// IMP=0x0000000000012e5b
+ (id)faceTimeURLWithPhoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x0000000000012e3d
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x00000000000692a9
+ (id)URLWithTelephoneNumber:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x0000000000069297
+ (id)URLWithTelephoneNumber:(id)arg1 promptUser:(_Bool)arg2;	// IMP=0x0000000000069285
+ (id)URLWithTelephoneNumber:(id)arg1;	// IMP=0x0000000000069273
+ (id)telephonyURLForTelEmergencyCall;	// IMP=0x00000000000691f9
+ (id)telephonyURLForVoicemail;	// IMP=0x0000000000069178
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2 forceAssist:(_Bool)arg3 suppressAssist:(_Bool)arg4 wasAssisted:(_Bool)arg5;	// IMP=0x0000000000068ff7
+ (id)telephonyURLWithDestinationID:(id)arg1 addressBookUID:(int)arg2;	// IMP=0x0000000000068f35
+ (id)telephonyURLWithDestinationID:(id)arg1 promptUser:(_Bool)arg2;	// IMP=0x0000000000068e10
+ (id)telephonyURLWithDestinationID:(id)arg1;	// IMP=0x0000000000068dfc
+ (id)tu_defaultAllowedSchemes;	// IMP=0x00000000000881eb
- (id)URLByDeletingQueryParameterWithKey:(id)arg1;	// IMP=0x000000000000b087
- (id)URLBySettingQueryParameterValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000af36
- (id)tuQueryParameters;	// IMP=0x000000000000aaaa
- (id)queryParameters;	// IMP=0x000000000000aa98
- (id)answerRequestSourceIdentifier;	// IMP=0x0000000000012c82
- (_Bool)isAnswerRequestURL;	// IMP=0x0000000000012c18
- (long long)foregroundAppApplicationType;	// IMP=0x0000000000012ba3
- (id)foregroundAppBundleIdentifier;	// IMP=0x0000000000012b4c
- (_Bool)isUpdateForegroundAppURL;	// IMP=0x0000000000012ad0
- (_Bool)isShowScreenSharingURL;	// IMP=0x0000000000012a85
- (_Bool)isShowSystemCallControlsURL;	// IMP=0x0000000000012a09
- (_Bool)isShowCarPlayInCallUIURL;	// IMP=0x000000000001298d
- (_Bool)isShowInCallUIURL;	// IMP=0x00000000000128c9
- (_Bool)isLaunchForOutgoingConversationURL;	// IMP=0x000000000001284d
- (_Bool)isLaunchForIncomingCallURL;	// IMP=0x00000000000127d1
- (_Bool)isDialCallURL;	// IMP=0x000000000001279a
- (_Bool)hasNoPromptOption;	// IMP=0x0000000000012712
- (id)conversationLinkURLForJoinConversation;	// IMP=0x0000000000012465
- (_Bool)isFaceTimeAppJoinConversationLinkURL;	// IMP=0x00000000000123e9
- (id)conversationLinkURLForOpenLinkURL;	// IMP=0x000000000001213c
- (_Bool)isFaceTimeOpenLinkURL;	// IMP=0x00000000000120f1
- (id)pseudonymForLinkDetailsView;	// IMP=0x0000000000011e79
- (_Bool)isFaceTimeAppViewLinkDetailsURL;	// IMP=0x0000000000011dfd
- (_Bool)isSystemCallControlsURL;	// IMP=0x0000000000011db2
- (_Bool)isFaceTimeMultiwayURL;	// IMP=0x0000000000011d67
- (_Bool)isFaceTimeAudioPromptURL;	// IMP=0x0000000000011d1c
- (_Bool)isFaceTimeAudioURL;	// IMP=0x0000000000011cb0
- (_Bool)isFaceTimePromptURL;	// IMP=0x0000000000011c65
- (_Bool)isFaceTimeURL;	// IMP=0x0000000000011bf9
- (_Bool)_isPhoneNumberID:(id)arg1;	// IMP=0x0000000000010803
- (id)faceTimeDestinationAccount;	// IMP=0x00000000000106ce
- (id)_mobilePhoneQueryParameters;	// IMP=0x000000000006a3ac
- (id)_mobilePhonePathParameters;	// IMP=0x000000000006a0b1
- (id)telephonyParameterDictionary;	// IMP=0x0000000000069fe7
@property(readonly) _Bool isVoicemailURL;
@property(readonly) _Bool isEmergencyCallURL;
@property(readonly) _Bool isEmergencyURL;
@property(readonly, nonatomic, getter=isBasebandLogURL) _Bool basebandLogURL;
- (id)webSafeTelephoneURL;	// IMP=0x0000000000069c3a
- (_Bool)isWebSafeTelephoneURL;	// IMP=0x0000000000069ae1
@property(readonly, copy, nonatomic) NSString *numberQualifiedForAddressBook;
@property(readonly, copy, nonatomic) NSString *formattedPhoneNumber;
- (_Bool)_hasScheme:(id)arg1;	// IMP=0x000000000006980d
- (_Bool)hasTelephonyScheme;	// IMP=0x00000000000697cd
- (_Bool)isTelephonyPromptURL;	// IMP=0x00000000000697b4
- (_Bool)isTelephonyURL;	// IMP=0x000000000006975d
- (_Bool)_dialAssistBooleanQueryParameterValueForKey:(id)arg1;	// IMP=0x0000000000069680
@property(readonly) _Bool wasAlreadyAssisted;
@property(readonly) _Bool suppressAssist;
@property(readonly) _Bool forceAssist;
@property(readonly) NSString *originatingUIIdentifier;
@property(readonly) int callService;
@property(readonly, nonatomic) int addressBookUID;
@property(readonly) NSString *phoneNumber;
- (id)_destinationIDConvertingNumbersToLatin:(_Bool)arg1;	// IMP=0x00000000000692bb
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1 allowedSchemes:(id)arg2;	// IMP=0x000000000008832a
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000882bf
- (id)sanitizedCopy;	// IMP=0x0000000000088257

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

