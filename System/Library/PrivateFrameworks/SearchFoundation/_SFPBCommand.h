//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCommand-Protocol.h>

@class NSData, NSString, _SFPBAddToPhotosLibraryCommand, _SFPBBeginMapsRoutingCommand, _SFPBCallCommand, _SFPBCopyCommand, _SFPBEmailCommand, _SFPBExpandInlineCommand, _SFPBIndexedUserActivityCommand, _SFPBInvokeSiriCommand, _SFPBLaunchAppCommand, _SFPBOpenAppClipCommand, _SFPBOpenCalculationCommand, _SFPBOpenCoreSpotlightItemCommand, _SFPBOpenFileProviderItemCommand, _SFPBOpenMediaCommand, _SFPBOpenPunchoutCommand, _SFPBOpenWebClipCommand, _SFPBPerformContactActionCommand, _SFPBPerformContactQueryCommand, _SFPBPerformEntityQueryCommand, _SFPBPerformIntentCommand, _SFPBPerformPersonEntityQueryCommand, _SFPBPlayMediaCommand, _SFPBPlayVideoCommand, _SFPBRequestAppClipInstallCommand, _SFPBRequestUserReportCommand, _SFPBRunVoiceShortcutCommand, _SFPBSearchInAppCommand, _SFPBSearchWebCommand, _SFPBShareCommand, _SFPBShowAppStoreSheetCommand, _SFPBShowContactCardCommand, _SFPBShowPhotosOneUpViewCommand, _SFPBShowPurchaseRequestSheetCommand, _SFPBShowSFCardCommand, _SFPBShowScreenTimeRequestSheetCommand, _SFPBToggleAudioCommand, _SFPBToggleWatchListStatusCommand, _SFPBUpdateSearchQueryCommand;

@interface _SFPBCommand : PBCodable <_SFPBCommand, NSSecureCoding>
{
    _SFPBShowContactCardCommand *_showContactCardCommand;	// 8 = 0x8
    _SFPBShowSFCardCommand *_showSFCardCommand;	// 16 = 0x10
    _SFPBShowAppStoreSheetCommand *_showAppStoreSheetCommand;	// 24 = 0x18
    _SFPBOpenPunchoutCommand *_openPunchoutCommand;	// 32 = 0x20
    _SFPBOpenFileProviderItemCommand *_openFileProviderItemCommand;	// 40 = 0x28
    _SFPBOpenAppClipCommand *_openAppClipCommand;	// 48 = 0x30
    _SFPBOpenWebClipCommand *_openWebClipCommand;	// 56 = 0x38
    _SFPBRequestAppClipInstallCommand *_requestAppClipInstallCommand;	// 64 = 0x40
    _SFPBRequestUserReportCommand *_requestUserReportCommand;	// 72 = 0x48
    _SFPBLaunchAppCommand *_launchAppCommand;	// 80 = 0x50
    _SFPBRunVoiceShortcutCommand *_runVoiceShortcutCommand;	// 88 = 0x58
    _SFPBIndexedUserActivityCommand *_indexedUserActivityCommand;	// 96 = 0x60
    _SFPBOpenCoreSpotlightItemCommand *_openCoreSpotlightItemCommand;	// 104 = 0x68
    _SFPBPerformIntentCommand *_performIntentCommand;	// 112 = 0x70
    _SFPBSearchInAppCommand *_searchInAppCommand;	// 120 = 0x78
    _SFPBUpdateSearchQueryCommand *_updateSearchQueryCommand;	// 128 = 0x80
    _SFPBSearchWebCommand *_searchWebCommand;	// 136 = 0x88
    _SFPBInvokeSiriCommand *_invokeSiriCommand;	// 144 = 0x90
    _SFPBPerformContactQueryCommand *_performContactQueryCommand;	// 152 = 0x98
    _SFPBOpenCalculationCommand *_openCalculationCommand;	// 160 = 0xa0
    _SFPBPlayVideoCommand *_playVideoCommand;	// 168 = 0xa8
    _SFPBCallCommand *_callCommand;	// 176 = 0xb0
    _SFPBEmailCommand *_emailCommand;	// 184 = 0xb8
    _SFPBBeginMapsRoutingCommand *_beginMapsRoutingCommand;	// 192 = 0xc0
    _SFPBToggleAudioCommand *_toggleAudioCommand;	// 200 = 0xc8
    _SFPBPerformPersonEntityQueryCommand *_performPersonEntityQueryCommand;	// 208 = 0xd0
    _SFPBShowPurchaseRequestSheetCommand *_showPurchaseRequestSheetCommand;	// 216 = 0xd8
    _SFPBShowScreenTimeRequestSheetCommand *_showScreenTimeRequestSheetCommand;	// 224 = 0xe0
    _SFPBPerformEntityQueryCommand *_performEntityQueryCommand;	// 232 = 0xe8
    _SFPBShareCommand *_shareCommand;	// 240 = 0xf0
    _SFPBCopyCommand *_copyCommand;	// 248 = 0xf8
    _SFPBToggleWatchListStatusCommand *_toggleWatchListStatusCommand;	// 256 = 0x100
    _SFPBShowPhotosOneUpViewCommand *_showPhotosOneUpViewCommand;	// 264 = 0x108
    _SFPBPlayMediaCommand *_playMediaCommand;	// 272 = 0x110
    _SFPBOpenMediaCommand *_openMediaCommand;	// 280 = 0x118
    _SFPBAddToPhotosLibraryCommand *_addToPhotosLibraryCommand;	// 288 = 0x120
    _SFPBPerformContactActionCommand *_performContactActionCommand;	// 296 = 0x128
    _SFPBExpandInlineCommand *_expandInlineCommand;	// 304 = 0x130
    NSString *_commandDetail;	// 312 = 0x138
    unsigned long long _whichValue;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x0000000000174338
@property(readonly, nonatomic) unsigned long long whichValue; // @synthesize whichValue=_whichValue;
@property(copy, nonatomic) NSString *commandDetail; // @synthesize commandDetail=_commandDetail;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000172caf
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000172bf1
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001710a0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016e681
- (void)writeTo:(id)arg1;	// IMP=0x000000000016ddab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016dd9e
@property(retain, nonatomic) _SFPBExpandInlineCommand *expandInlineCommand; // @synthesize expandInlineCommand=_expandInlineCommand;
@property(retain, nonatomic) _SFPBPerformContactActionCommand *performContactActionCommand; // @synthesize performContactActionCommand=_performContactActionCommand;
@property(retain, nonatomic) _SFPBAddToPhotosLibraryCommand *addToPhotosLibraryCommand; // @synthesize addToPhotosLibraryCommand=_addToPhotosLibraryCommand;
@property(retain, nonatomic) _SFPBOpenMediaCommand *openMediaCommand; // @synthesize openMediaCommand=_openMediaCommand;
@property(retain, nonatomic) _SFPBPlayMediaCommand *playMediaCommand; // @synthesize playMediaCommand=_playMediaCommand;
@property(retain, nonatomic) _SFPBShowPhotosOneUpViewCommand *showPhotosOneUpViewCommand; // @synthesize showPhotosOneUpViewCommand=_showPhotosOneUpViewCommand;
@property(retain, nonatomic) _SFPBToggleWatchListStatusCommand *toggleWatchListStatusCommand; // @synthesize toggleWatchListStatusCommand=_toggleWatchListStatusCommand;
@property(retain, nonatomic) _SFPBCopyCommand *copyCommand; // @synthesize copyCommand=_copyCommand;
@property(retain, nonatomic) _SFPBShareCommand *shareCommand; // @synthesize shareCommand=_shareCommand;
@property(retain, nonatomic) _SFPBPerformEntityQueryCommand *performEntityQueryCommand; // @synthesize performEntityQueryCommand=_performEntityQueryCommand;
@property(retain, nonatomic) _SFPBShowScreenTimeRequestSheetCommand *showScreenTimeRequestSheetCommand; // @synthesize showScreenTimeRequestSheetCommand=_showScreenTimeRequestSheetCommand;
@property(retain, nonatomic) _SFPBShowPurchaseRequestSheetCommand *showPurchaseRequestSheetCommand; // @synthesize showPurchaseRequestSheetCommand=_showPurchaseRequestSheetCommand;
@property(retain, nonatomic) _SFPBPerformPersonEntityQueryCommand *performPersonEntityQueryCommand; // @synthesize performPersonEntityQueryCommand=_performPersonEntityQueryCommand;
@property(retain, nonatomic) _SFPBToggleAudioCommand *toggleAudioCommand; // @synthesize toggleAudioCommand=_toggleAudioCommand;
@property(retain, nonatomic) _SFPBBeginMapsRoutingCommand *beginMapsRoutingCommand; // @synthesize beginMapsRoutingCommand=_beginMapsRoutingCommand;
@property(retain, nonatomic) _SFPBEmailCommand *emailCommand; // @synthesize emailCommand=_emailCommand;
@property(retain, nonatomic) _SFPBCallCommand *callCommand; // @synthesize callCommand=_callCommand;
@property(retain, nonatomic) _SFPBPlayVideoCommand *playVideoCommand; // @synthesize playVideoCommand=_playVideoCommand;
@property(retain, nonatomic) _SFPBOpenCalculationCommand *openCalculationCommand; // @synthesize openCalculationCommand=_openCalculationCommand;
@property(retain, nonatomic) _SFPBPerformContactQueryCommand *performContactQueryCommand; // @synthesize performContactQueryCommand=_performContactQueryCommand;
@property(retain, nonatomic) _SFPBInvokeSiriCommand *invokeSiriCommand; // @synthesize invokeSiriCommand=_invokeSiriCommand;
@property(retain, nonatomic) _SFPBSearchWebCommand *searchWebCommand; // @synthesize searchWebCommand=_searchWebCommand;
@property(retain, nonatomic) _SFPBUpdateSearchQueryCommand *updateSearchQueryCommand; // @synthesize updateSearchQueryCommand=_updateSearchQueryCommand;
@property(retain, nonatomic) _SFPBSearchInAppCommand *searchInAppCommand; // @synthesize searchInAppCommand=_searchInAppCommand;
@property(retain, nonatomic) _SFPBPerformIntentCommand *performIntentCommand; // @synthesize performIntentCommand=_performIntentCommand;
@property(retain, nonatomic) _SFPBOpenCoreSpotlightItemCommand *openCoreSpotlightItemCommand; // @synthesize openCoreSpotlightItemCommand=_openCoreSpotlightItemCommand;
@property(retain, nonatomic) _SFPBIndexedUserActivityCommand *indexedUserActivityCommand; // @synthesize indexedUserActivityCommand=_indexedUserActivityCommand;
@property(retain, nonatomic) _SFPBRunVoiceShortcutCommand *runVoiceShortcutCommand; // @synthesize runVoiceShortcutCommand=_runVoiceShortcutCommand;
@property(retain, nonatomic) _SFPBLaunchAppCommand *launchAppCommand; // @synthesize launchAppCommand=_launchAppCommand;
@property(retain, nonatomic) _SFPBRequestUserReportCommand *requestUserReportCommand; // @synthesize requestUserReportCommand=_requestUserReportCommand;
@property(retain, nonatomic) _SFPBRequestAppClipInstallCommand *requestAppClipInstallCommand; // @synthesize requestAppClipInstallCommand=_requestAppClipInstallCommand;
@property(retain, nonatomic) _SFPBOpenWebClipCommand *openWebClipCommand; // @synthesize openWebClipCommand=_openWebClipCommand;
@property(retain, nonatomic) _SFPBOpenAppClipCommand *openAppClipCommand; // @synthesize openAppClipCommand=_openAppClipCommand;
@property(retain, nonatomic) _SFPBOpenFileProviderItemCommand *openFileProviderItemCommand; // @synthesize openFileProviderItemCommand=_openFileProviderItemCommand;
@property(retain, nonatomic) _SFPBOpenPunchoutCommand *openPunchoutCommand; // @synthesize openPunchoutCommand=_openPunchoutCommand;
@property(retain, nonatomic) _SFPBShowAppStoreSheetCommand *showAppStoreSheetCommand; // @synthesize showAppStoreSheetCommand=_showAppStoreSheetCommand;
@property(retain, nonatomic) _SFPBShowSFCardCommand *showSFCardCommand; // @synthesize showSFCardCommand=_showSFCardCommand;
@property(retain, nonatomic) _SFPBShowContactCardCommand *showContactCardCommand; // @synthesize showContactCardCommand=_showContactCardCommand;
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000001492f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

