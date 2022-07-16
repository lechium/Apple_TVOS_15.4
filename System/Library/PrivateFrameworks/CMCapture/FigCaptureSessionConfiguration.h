//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CMCapture/FigXPCCoding-Protocol.h>
#import <CMCapture/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_tcc_identity;

@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSMutableArray *_connections;	// 8 = 0x8
    long long _configurationID;	// 16 = 0x10
    NSString *_sessionPreset;	// 24 = 0x18
    _Bool _usesAppAudioSession;	// 32 = 0x20
    _Bool _configuresAppAudioSession;	// 33 = 0x21
    _Bool _allowedToRunInMultitaskingMode;	// 34 = 0x22
    _Bool _isMultiCamSession;	// 35 = 0x23
    _Bool _xctestAuthorizedToStealDevice;	// 36 = 0x24
    NSObject<OS_tcc_identity> *_tccIdentity;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x0000000000003998
@property(retain, nonatomic) NSObject<OS_tcc_identity> *tccIdentity; // @synthesize tccIdentity=_tccIdentity;
@property(nonatomic) _Bool xctestAuthorizedToStealDevice; // @synthesize xctestAuthorizedToStealDevice=_xctestAuthorizedToStealDevice;
@property(nonatomic, getter=isMultiCamSession) _Bool multiCamSession; // @synthesize multiCamSession=_isMultiCamSession;
@property(nonatomic) _Bool allowedToRunInMultitaskingMode; // @synthesize allowedToRunInMultitaskingMode=_allowedToRunInMultitaskingMode;
@property(nonatomic) _Bool configuresAppAudioSession; // @synthesize configuresAppAudioSession=_configuresAppAudioSession;
@property(nonatomic) _Bool usesAppAudioSession; // @synthesize usesAppAudioSession=_usesAppAudioSession;
@property(retain, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(nonatomic) long long configurationID; // @synthesize configurationID=_configurationID;
@property(readonly, nonatomic) NSArray *sinkConfigurations;
@property(readonly, nonatomic) NSArray *sourceConfigurations;
@property(readonly, nonatomic) NSArray *connectionConfigurations;
- (void)removeConnectionConfiguration:(id)arg1;	// IMP=0x0000000000004a43
- (void)addConnectionConfiguration:(id)arg1;	// IMP=0x0000000000004a2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004788
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000044be
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000004238
- (id)copyXPCEncoding;	// IMP=0x0000000000003de4
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000039fb
- (id)init;	// IMP=0x00000000000039a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
