//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface MLMovieArtist : NSObject <NSCopying>
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000df071
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000df001
- (void)_setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000defd5
- (id)copyMovieArtistDictionary;	// IMP=0x00000000000defbf
@property(copy, nonatomic) NSNumber *ITunesStoreIdentifier;
@property(copy, nonatomic) NSString *artistName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000def23
- (id)initWithMovieArtistDictionary:(id)arg1;	// IMP=0x00000000000dee9d
- (id)init;	// IMP=0x00000000000dee89

@end

