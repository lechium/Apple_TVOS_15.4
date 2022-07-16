//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKDiscoveryMedia;

@interface PKDiscoveryInlineMediaShelf
{
    PKDiscoveryMedia *_media;	// 32 = 0x20
    NSString *_captionKey;	// 40 = 0x28
    long long _displayType;	// 48 = 0x30
    NSString *_localizedCaption;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002e6ffd
- (void).cxx_destruct;	// IMP=0x00000000002e727d
@property(retain, nonatomic) NSString *localizedCaption; // @synthesize localizedCaption=_localizedCaption;
@property(readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) NSString *captionKey; // @synthesize captionKey=_captionKey;
@property(readonly, nonatomic) PKDiscoveryMedia *media; // @synthesize media=_media;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e70de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e7005
- (id)description;	// IMP=0x00000000002e6edf
- (unsigned long long)hash;	// IMP=0x00000000002e6e19
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e6d39
- (void)localizeWithBundle:(id)arg1 table:(id)arg2;	// IMP=0x00000000002e6cd9
- (void)localizeWithBundle:(id)arg1;	// IMP=0x00000000002e6cbd
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002e6b42

@end

