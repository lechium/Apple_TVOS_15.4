//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VCImageAttributeRules;

__attribute__((visibility("hidden")))
@interface SDPMediaLine : NSObject
{
    NSMutableArray *_attributes;	// 8 = 0x8
    VCImageAttributeRules *_imageAttributeRules;	// 16 = 0x10
    NSMutableArray *_payloads;	// 24 = 0x18
    unsigned int _rtpId;	// 32 = 0x20
    int _rtcpPort;	// 36 = 0x24
    int _rtpPort;	// 40 = 0x28
    _Bool _allowRTCPFB;	// 44 = 0x2c
}

+ (void)fillImageArray:(id)arg1 imageArray:(struct imageTag *)arg2;	// IMP=0x00000000001d5b6f
+ (void)fillImageStruct:(id)arg1 imageStruct:(struct imageTag *)arg2;	// IMP=0x00000000001d567c
+ (void)fillImageStructWithDictionary:(id)arg1 forInterface:(int)arg2 imageStruct:(struct imageTag *)arg3;	// IMP=0x00000000001d5532
@property(readonly, nonatomic) _Bool allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
@property(retain, nonatomic) VCImageAttributeRules *imageAttributeRules; // @synthesize imageAttributeRules=_imageAttributeRules;
@property(readonly, nonatomic) NSArray *payloads; // @synthesize payloads=_payloads;
@property(readonly, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) int rtcpPort; // @synthesize rtcpPort=_rtcpPort;
@property(readonly, nonatomic) int rtpPort; // @synthesize rtpPort=_rtpPort;
@property(nonatomic) unsigned int rtpId; // @synthesize rtpId=_rtpId;
@property(readonly, nonatomic) NSString *string;
- (void)parseMediaLine:(id)arg1;	// IMP=0x00000000001d6838
- (void)parseAttribute:(id)arg1;	// IMP=0x00000000001d6557
- (void)parseImageAttributeRules:(id)arg1;	// IMP=0x00000000001d6149
- (_Bool)videoDisplayAttribute:(int *)arg1 withHeight:(int *)arg2;	// IMP=0x00000000001d5ce5
- (_Bool)supportImage:(id)arg1 width:(int)arg2 height:(int)arg3 rate:(int)arg4;	// IMP=0x00000000001d5c06
- (id)getVideoRecvImages:(id)arg1;	// IMP=0x00000000001d5149
- (id)getVideoSendImages:(id)arg1;	// IMP=0x00000000001d4d60
- (id)videoImageAttributes:(int)arg1;	// IMP=0x00000000001d4b3f
- (void)createVideoImageAttr:(int)arg1 direction:(int)arg2 dimensions:(struct imageTag *)arg3 count:(int)arg4;	// IMP=0x00000000001d4a78
- (void)addWifiRules:(id)arg1 cellularRules:(id)arg2 payload:(int)arg3 direction:(int)arg4;	// IMP=0x00000000001d492f
- (void)addImageAttributeRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 direction:(int)arg4 attributeString:(id)arg5;	// IMP=0x00000000001d470e
- (void)appendPayload:(int)arg1 dimensions:(struct imageTag *)arg2 direction:(int)arg3 attributeString:(id)arg4;	// IMP=0x00000000001d459a
- (void)addVideoImageAttr:(id)arg1 ForPayload:(int)arg2;	// IMP=0x00000000001d43c0
- (void)addPayload:(int)arg1 rtpMap:(id)arg2 formatParameters:(id)arg3;	// IMP=0x00000000001d4306
- (void)addAttribute:(id)arg1;	// IMP=0x00000000001d42f0
- (void)dealloc;	// IMP=0x00000000001d427c
- (id)initWithParser:(id)arg1 rtpPort:(int)arg2 payloads:(id)arg3;	// IMP=0x00000000001d4197
- (id)init;	// IMP=0x00000000001d40f3

@end

