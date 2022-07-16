//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMessageFileWrapper, NSMutableDictionary;

@interface MFMessageTextAttachment : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
}

+ (unsigned long long)precedenceLevel;	// IMP=0x0000000000030a6f
- (id)persistentUniqueIdentifier;	// IMP=0x0000000000030a67
- (id)fileWrapperForcingDownload:(_Bool)arg1;	// IMP=0x0000000000030a20
- (void)inlineDisplayData:(id *)arg1 mimeType:(id *)arg2;	// IMP=0x00000000000309bd
- (_Bool)isPlaceholder;	// IMP=0x0000000000030990
- (void)download;	// IMP=0x000000000003098a
- (_Bool)needsRedownload;	// IMP=0x0000000000030982
- (_Bool)hasBeenDownloaded;	// IMP=0x000000000003096d
- (unsigned int)approximateSize;	// IMP=0x00000000000307ca
@property(retain, nonatomic) MFMessageFileWrapper *fileWrapper;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000030703
- (id)cachedValueForKey:(id)arg1;	// IMP=0x00000000000306a1
- (id)description;	// IMP=0x0000000000030645
- (void)dealloc;	// IMP=0x000000000003060a
- (id)initWithWrapper:(id)arg1;	// IMP=0x000000000003059d
- (id)init;	// IMP=0x0000000000030541
- (void)setMimePart:(id)arg1;	// IMP=0x0000000000030e5e
- (id)mimePart;	// IMP=0x0000000000030e45
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;	// IMP=0x0000000000030e87
- (id)textEncodingGuess;	// IMP=0x0000000000030e7f
- (_Bool)shouldDownloadAttachmentOnDisplay;	// IMP=0x0000000000030e77

@end
