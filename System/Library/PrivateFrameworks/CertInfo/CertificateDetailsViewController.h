//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface CertificateDetailsViewController : UITableViewController
{
    id _certificateTrust;	// 8 = 0x8
    NSArray *_keyValueSections;	// 16 = 0x10
    NSArray *_keyValueSectionTitles;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000610c
@property(retain, nonatomic) NSArray *keyValueSectionTitles; // @synthesize keyValueSectionTitles=_keyValueSectionTitles;
@property(retain, nonatomic) NSArray *keyValueSections; // @synthesize keyValueSections=_keyValueSections;
@property(retain, nonatomic) id certificateTrust; // @synthesize certificateTrust=_certificateTrust;
- (void)preferredContentSizeChanged:(id)arg1;	// IMP=0x0000000000006060
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000005ec9
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000005e21
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000005e0c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000005d48
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000005d04
- (void)setCertificateProperties:(id)arg1;	// IMP=0x0000000000005bf3
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000005bc4
- (void)viewDidLoad;	// IMP=0x0000000000005b95
- (void)_setup;	// IMP=0x00000000000059e1
- (void)dealloc;	// IMP=0x000000000000596c
- (id)initWithTrust:(struct __SecTrust *)arg1;	// IMP=0x0000000000005854
- (id)initWithCertificateProperties:(id)arg1;	// IMP=0x0000000000005738
- (id)initWithCertificate:(struct __SecCertificate *)arg1;	// IMP=0x0000000000005632
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000000000055e6
- (id)init;	// IMP=0x000000000000559a

@end

